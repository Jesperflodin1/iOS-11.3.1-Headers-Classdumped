/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCHCExpectation.h>

@class CKDatabase, CKRecordID, NSString;

@interface FCHCRecordExistenceExpectation : NSObject <FCHCExpectation> {

	BOOL _shouldExist;
	CKDatabase* _database;
	CKRecordID* _recordID;

}

@property (nonatomic,retain) CKDatabase * database;                 //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) BOOL shouldExist;                      //@synthesize shouldExist=_shouldExist - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)validate;
-(CKRecordID *)recordID;
-(void)setShouldExist:(BOOL)arg1 ;
-(BOOL)shouldExist;
-(CKDatabase *)database;
-(void)setDatabase:(CKDatabase *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end
