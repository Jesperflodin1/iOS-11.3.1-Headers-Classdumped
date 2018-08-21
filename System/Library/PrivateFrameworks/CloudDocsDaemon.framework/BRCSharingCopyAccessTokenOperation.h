/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKRecordID, NSString;

@interface BRCSharingCopyAccessTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	CKRecordID* _recordID;
	CKRecordID* _shareID;

}

@property (nonatomic,retain) CKRecordID * recordID;                 //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) CKRecordID * shareID;                  //@synthesize shareID=_shareID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(CKRecordID *)recordID;
-(id)initWithItem:(id)arg1 ;
-(id)createActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(CKRecordID *)shareID;
-(void)setShareID:(CKRecordID *)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

