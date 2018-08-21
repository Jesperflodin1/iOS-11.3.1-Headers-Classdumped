/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iTunesCloud/iTunesCloud-Structs.h>
@interface ICFPLeaseSyncSession : NSObject {

	FPLeaseSyncOpaque_Ref _fpLeaseSync;
	FairPlayHWInfo_ _hardwareInfo;
	unsigned _mediaKind;
	unsigned long long _accountID;
	id _leaseID;

}

@property (nonatomic,readonly) unsigned long long accountID;              //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,readonly) id leaseID;                                //@synthesize leaseID=_leaseID - In the implementation block
@property (nonatomic,readonly) unsigned mediaKind;                        //@synthesize mediaKind=_mediaKind - In the implementation block
+(id)leaseSyncSessionWithID:(id)arg1 accountID:(unsigned long long)arg2 mediaKind:(unsigned)arg3 returningLeaseSyncRequestData:(id*)arg4 error:(id*)arg5 ;
-(unsigned)mediaKind;
-(void)dealloc;
-(id)_initWithFPLeaseSync:(FPLeaseSyncOpaque_Ref)arg1 leaseID:(id)arg2 accountID:(unsigned long long)arg3 hardwareInfo:(FairPlayHWInfo_)arg4 mediaKind:(unsigned)arg5 ;
-(BOOL)endLeaseSyncAndReturnError:(id*)arg1 ;
-(BOOL)getLeaseSyncRenewRequestData:(id*)arg1 error:(id*)arg2 ;
-(BOOL)importLeaseSyncResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)processRenewResponseData:(id)arg1 error:(id*)arg2 ;
-(id)leaseID;
-(unsigned long long)accountID;
@end

