/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModuleBase.framework/ModuleBase
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MechanismManager;

@interface Module : NSObject {

	MechanismManager* _mechanismManager;

}

@property (nonatomic,readonly) MechanismManager * mechanismManager;              //@synthesize mechanismManager=_mechanismManager - In the implementation block
+(id)missingSubclassErrorWithIdentifier:(id)arg1 ;
-(id)initWithMechanismManager:(id)arg1 ;
-(void)contextPluginWithExternalizedContext:(id)arg1 processId:(int)arg2 invalidationBlock:(/*^block*/id)arg3 reply:(/*^block*/id)arg4 ;
-(MechanismManager *)mechanismManager;
@end

