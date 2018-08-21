/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCRCTargetSelector : NSObject {

	id _target;
	SEL _selector;

}

@property (nonatomic,__weak,readonly) id target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                  //@synthesize selector=_selector - In the implementation block
+(id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2 ;
-(id)target;
-(SEL)selector;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 ;
@end

