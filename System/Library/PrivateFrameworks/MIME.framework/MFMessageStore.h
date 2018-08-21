/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, MFMessageStoreObjectCache, NSString;

@interface MFMessageStore : NSObject <NSCopying> {

	NSMutableSet* _uniqueStrings;
	MFMessageStoreObjectCache* _objectCache;

}

@property (nonatomic,retain,readonly) MFMessageStoreObjectCache * objectCache;              //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,copy) NSString * storagePath; 
+(void)setDefaultMessageHeadersClass:(Class)arg1 ;
+(Class)classForMimePart;
+(Class)headersClass;
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)uniquedString:(id)arg1 ;
-(void)_flushAllCaches;
-(id)_bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(void)_deleteCachedBodyForMessage:(id)arg1 ;
-(id)_cachedBodyDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)decryptedTopLevelPartForPart:(id)arg1 ;
-(id)defaultAlternativeForPart:(id)arg1 ;
-(id)bestAlternativeForPart:(id)arg1 ;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg1 ;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)_downloadHeadersForMessages:(id)arg1 ;
-(BOOL)messageCanBeTriaged:(id)arg1 ;
-(id)additionalHeadersForReplyOfMessage:(id)arg1 ;
-(id)additionalHeadersForForwardOfMessage:(id)arg1 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(id)newObjectCache;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)headersForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 ;
-(void)_flushAllMessageData;
-(id)_setOrGetBody:(id)arg1 forMessage:(id)arg2 updateFlags:(BOOL)arg3 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(NSString *)storagePath;
-(id)bodyForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 updateFlags:(BOOL)arg3 ;
-(void)setStoragePath:(NSString *)arg1 ;
-(id)headerDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(MFMessageStoreObjectCache *)objectCache;
-(void)setMessageClass:(Class)arg1 ;
@end

