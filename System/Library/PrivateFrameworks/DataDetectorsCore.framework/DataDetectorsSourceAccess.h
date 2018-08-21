/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <DataDetectorsCore/DataDetectorsSourceAccessProtocol.h>

@interface DataDetectorsSourceAccess : NSObject <DataDetectorsSourceAccessProtocol> {

	SCD_Struct_Da2 _auditToken;
	int _clientpid;
	unsigned _clientuid;
	BOOL _privacyUserReadEntitled;
	long long _privacyUserReadEntitlementChecked;
	BOOL _privacyUserWriteEntitled;
	long long _privacyUserWriteEntitlementChecked;
	BOOL _privacySystemWriteEntitled;
	long long _privacySystemWriteEntitlementChecked;

}

@property (assign) SCD_Struct_Da2 auditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (assign) int processIdentifier;                  //@synthesize clientpid=_clientpid - In the implementation block
@property (assign) unsigned userIdentifier;                //@synthesize clientuid=_clientuid - In the implementation block
-(void)setAuditToken:(SCD_Struct_Da2)arg1 ;
-(void)fileForSourceRead:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)filesForSourceRead:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)writeSourceFromJSONFile:(id)arg1 source:(id)arg2 withReply:(/*^block*/id)arg3 ;
-(void)writeSourceFromRawData:(id)arg1 source:(id)arg2 signature:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(BOOL)privacyUserReadEntitled;
-(BOOL)privacyUserWriteEntitled;
-(BOOL)privacySystemWriteEntitled;
-(id)fileHandleForSourceRead:(int)arg1 ;
-(BOOL)clientCanWriteSource:(int)arg1 ;
-(BOOL)pushSourcesContent:(id)arg1 forSource:(int)arg2 signature:(id)arg3 ;
-(int)processIdentifier;
-(SCD_Struct_Da2)auditToken;
-(void)setUserIdentifier:(unsigned)arg1 ;
-(unsigned)userIdentifier;
-(void)setProcessIdentifier:(int)arg1 ;
@end
