/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageStore.h>

@class NSData, NSString;

@interface MFDataMessageStore : MFMessageStore {

	NSData* _data;
	Class _messageClass;
	NSString* _storagePath;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)message;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)storePath;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(void)writeUpdatedMessageDataToDisk;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)storagePath;
-(void)setStoragePath:(id)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)mailboxUid;
-(id)account;
-(void)setMessageClass:(Class)arg1 ;
@end

