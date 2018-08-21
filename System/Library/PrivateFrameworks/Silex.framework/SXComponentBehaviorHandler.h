/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXComponentView, SXComponentBehavior, UIView;

@interface SXComponentBehaviorHandler : NSObject {

	BOOL _isSetup;
	SXComponentView* _componentView;
	SXComponentBehavior* _behavior;

}

@property (nonatomic,readonly) SXComponentView * componentView;              //@synthesize componentView=_componentView - In the implementation block
@property (nonatomic,readonly) SXComponentBehavior * behavior;               //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) UIView * behaviorView; 
@property (nonatomic,readonly) BOOL isSetup;                                 //@synthesize isSetup=_isSetup - In the implementation block
-(SXComponentBehavior *)behavior;
-(SXComponentView *)componentView;
-(BOOL)isSetup;
-(id)initWithComponentView:(id)arg1 withBehavior:(id)arg2 ;
-(void)setupWithBehaviorController:(id)arg1 ;
-(void)updateWithBehaviorController:(id)arg1 ;
-(UIView *)behaviorView;
-(void)destroyWithBehaviorController:(id)arg1 ;
@end

