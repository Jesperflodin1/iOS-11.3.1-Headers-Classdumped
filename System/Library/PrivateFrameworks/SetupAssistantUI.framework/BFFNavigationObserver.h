/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BFFNavigationControllerDelegate;
@interface BFFNavigationObserver : NSObject {

	id<BFFNavigationControllerDelegate> _observer;

}

@property (assign,nonatomic,__weak) id<BFFNavigationControllerDelegate> observer;              //@synthesize observer=_observer - In the implementation block
+(id)observerWithObserver:(id)arg1 ;
-(void)setObserver:(id<BFFNavigationControllerDelegate>)arg1 ;
-(id<BFFNavigationControllerDelegate>)observer;
@end

