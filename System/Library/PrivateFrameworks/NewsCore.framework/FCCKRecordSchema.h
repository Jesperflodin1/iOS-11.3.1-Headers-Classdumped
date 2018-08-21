/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface FCCKRecordSchema : NSObject {

	NSDictionary* _fieldSchemasByName;
	NSString* _clientRecordType;
	NSString* _serverRecordType;

}

@property (nonatomic,copy,readonly) NSString * clientRecordType;                     //@synthesize clientRecordType=_clientRecordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * serverRecordType;                     //@synthesize serverRecordType=_serverRecordType - In the implementation block
@property (nonatomic,readonly) BOOL hasEncryptedFields; 
@property (nonatomic,copy,readonly) NSArray * allEncryptedFieldNames; 
@property (nonatomic,copy,readonly) NSArray * allUnencryptedFieldNames; 
+(id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3 ;
-(id)init;
-(NSString *)clientRecordType;
-(NSArray *)allEncryptedFieldNames;
-(NSString *)serverRecordType;
-(NSArray *)allUnencryptedFieldNames;
-(BOOL)isFieldKnown:(id)arg1 ;
-(BOOL)isFieldEncrypted:(id)arg1 ;
-(BOOL)hasEncryptedFields;
-(id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3 ;
@end

