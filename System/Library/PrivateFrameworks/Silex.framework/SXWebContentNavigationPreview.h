/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXWebContentNavigationHandler;
@class UIViewController, NSURLRequest;

@interface SXWebContentNavigationPreview : NSObject {

	UIViewController* _viewController;
	id<SXWebContentNavigationHandler> _navigationHandler;
	NSURLRequest* _request;

}

@property (nonatomic,__weak,readonly) UIViewController * viewController;                         //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) id<SXWebContentNavigationHandler> navigationHandler;              //@synthesize navigationHandler=_navigationHandler - In the implementation block
@property (nonatomic,readonly) NSURLRequest * request;                                           //@synthesize request=_request - In the implementation block
-(NSURLRequest *)request;
-(UIViewController *)viewController;
-(id)initWithViewController:(id)arg1 navigationHandler:(id)arg2 URLRequest:(id)arg3 ;
-(id<SXWebContentNavigationHandler>)navigationHandler;
@end
