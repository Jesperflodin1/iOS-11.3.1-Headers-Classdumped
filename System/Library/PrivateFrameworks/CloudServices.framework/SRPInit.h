/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SRPClientRequest.h>

@class NSString, NSDictionary, SecureBackup;

@interface SRPInit : NSObject <SRPClientRequest> {

	NSString* _recordLabel;
	NSDictionary* _escrowRecord;
	NSString* _recordID;
	SecureBackup* _sb;

}

@property (nonatomic,copy,readonly) NSString * dsid; 
@property (nonatomic,copy) NSString * recordLabel;                              //@synthesize recordLabel=_recordLabel - In the implementation block
@property (nonatomic,copy,readonly) NSString * recoveryPassphrase; 
@property (nonatomic,retain) NSDictionary * escrowRecord;                       //@synthesize escrowRecord=_escrowRecord - In the implementation block
@property (nonatomic,copy) NSString * recordID;                                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain,readonly) SecureBackup * sb;                        //@synthesize sb=_sb - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)recordID;
-(SecureBackup *)sb;
-(NSString *)recordLabel;
-(NSString *)recoveryPassphrase;
-(NSDictionary *)escrowRecord;
-(id)initWithSecureBackup:(id)arg1 ;
-(void)setRecordLabel:(NSString *)arg1 ;
-(void)setEscrowRecord:(NSDictionary *)arg1 ;
-(NSString *)dsid;
-(void)setRecordID:(NSString *)arg1 ;
-(id)validateInput;
@end

