/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFullscreenCaptionViewFactory.h>

@protocol SXFullscreenCaptionViewFactory <NSObject>
@required
-(id)createCaptionView;

@end


@protocol SXActionProvider, SXComponentActionHandler;
@class NSString;

@interface SXFullscreenCaptionViewFactory : NSObject <SXFullscreenCaptionViewFactory> {

	id<SXActionProvider> _actionProvider;
	id<SXComponentActionHandler> _actionHandler;

}

@property (nonatomic,readonly) id<SXActionProvider> actionProvider;                     //@synthesize actionProvider=_actionProvider - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> actionHandler;              //@synthesize actionHandler=_actionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionProvider>)actionProvider;
-(id)initWithActionProvider:(id)arg1 actionHandler:(id)arg2 ;
-(id)createCaptionView;
-(id<SXComponentActionHandler>)actionHandler;
@end

