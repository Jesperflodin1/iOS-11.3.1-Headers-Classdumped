/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIViewController;

@interface UIViewControllerAction : NSObject {

	NSString* _name;
	int _transition;
	/*^block*/id _completion;
	double _curlUpRevealedHeight;
	UIViewController* _viewController;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;                                   //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL animated; 
@property (assign,nonatomic) int transition;                                                             //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy) id completion;                                                                //@synthesize completion=_completion - In the implementation block
@property (assign,setter=_setCurlUpRevealedHeight:,nonatomic) double _curlUpRevealedHeight;              //@synthesize curlUpRevealedHeight=_curlUpRevealedHeight - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(double)_curlUpRevealedHeight;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(void)setTransition:(int)arg1 ;
-(int)transition;
-(id)initWithViewController:(id)arg1 name:(id)arg2 transition:(int)arg3 ;
-(BOOL)animated;
-(void)_setCurlUpRevealedHeight:(double)arg1 ;
-(UIViewController *)viewController;
@end

