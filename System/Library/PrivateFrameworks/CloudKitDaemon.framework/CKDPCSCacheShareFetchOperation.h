/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDPCSCacheFetchOperation.h>

@class CKRecordID, CKDSharePCSData;

@interface CKDPCSCacheShareFetchOperation : CKDPCSCacheFetchOperation

@property (nonatomic,readonly) CKRecordID * shareID; 
@property (nonatomic,retain) CKDSharePCSData * sharePCSData; 
-(void)setSharePCSData:(CKDSharePCSData *)arg1 ;
-(void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2 ;
-(id)itemTypeName;
-(BOOL)hasAllPCSData;
-(BOOL)_fetchPCSDataFromDatabase;
-(BOOL)_fetchPCSDataFromServer;
-(BOOL)_decryptPCS;
-(BOOL)_savePCSDataToCache;
-(CKDSharePCSData *)sharePCSData;
-(CKRecordID *)shareID;
@end

