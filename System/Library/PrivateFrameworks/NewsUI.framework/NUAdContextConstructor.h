/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NUAdContextDefinition;

@interface NUAdContextConstructor : NSObject {

	NUAdContextDefinition* _rootDefinition;
	NUAdContextDefinition* _headerDefinition;
	NUAdContextDefinition* _bodyDefinition;

}

@property (nonatomic,readonly) NUAdContextDefinition * rootDefinition;                //@synthesize rootDefinition=_rootDefinition - In the implementation block
@property (nonatomic,readonly) NUAdContextDefinition * headerDefinition;              //@synthesize headerDefinition=_headerDefinition - In the implementation block
@property (nonatomic,readonly) NUAdContextDefinition * bodyDefinition;                //@synthesize bodyDefinition=_bodyDefinition - In the implementation block
-(id)initWithRootDefinition:(id)arg1 headerDefinition:(id)arg2 bodyDefinition:(id)arg3 ;
-(id)contextForContextProviders:(id)arg1 keyedContextProviders:(id)arg2 ;
-(NUAdContextDefinition *)rootDefinition;
-(id)valueForPropertyDefinition:(id)arg1 fromContextProviders:(id)arg2 keyedContextProviders:(id)arg3 ;
-(id)contextEntryForKey:(id)arg1 andValue:(id)arg2 ;
-(id)newsContextForContextProviders:(id)arg1 andKeyedContextProviders:(id)arg2 ;
-(NUAdContextDefinition *)headerDefinition;
-(void)dictionary:(id)arg1 addValue:(id)arg2 forKeyPath:(id)arg3 ;
-(NUAdContextDefinition *)bodyDefinition;
@end
