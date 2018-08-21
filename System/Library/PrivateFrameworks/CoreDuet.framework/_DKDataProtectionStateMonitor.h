/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKDataProtectionMaster, NSUUID;

@interface _DKDataProtectionStateMonitor : NSObject {

	_DKDataProtectionMaster* _master;
	NSUUID* _handlerUUID;
	/*^block*/id _changeHandler;

}

@property (copy) id changeHandler;              //@synthesize changeHandler=_changeHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setChangeHandler:(id)arg1 ;
-(BOOL)isDataAvailableFor:(id)arg1 ;
-(id)changeHandler;
@end

