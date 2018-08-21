/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MFAttachmentPlaceholder : NSObject {

	NSMutableDictionary* _jsonDictionary;

}
+(id)placeholder;
+(id)placeholderDirectory;
+(id)_localStoreURLForFileData:(id)arg1 contentID:(id)arg2 ;
+(id)_placeholderMagic;
+(id)_localStoreURLForFileURL:(id)arg1 contentID:(id)arg2 ;
+(id)placeholderForFileURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(void)removePlaceholderForFileURL:(id)arg1 ;
+(id)placeholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)placeholderForMediaURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(void)removePlaceholderForContentID:(id)arg1 ;
+(id)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 ;
+(id)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 ;
+(BOOL)isPlaceholderSerializedRepresentation:(id)arg1 ;
+(BOOL)writeData:(id)arg1 forURL:(id)arg2 ;
+(id)placeholderFromSerializedRepresentation:(id)arg1 ;
+(BOOL)cloneFileAtURL:(id)arg1 toPlaceholderURL:(id)arg2 ;
+(BOOL)hasPlaceholderRepresentation:(id)arg1 ;
+(id)placeholderRepresentations:(id)arg1 ;
+(void)removePlaceholder:(id)arg1 ;
+(id)dataForPlaceholder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)fileSize;
-(void)setFileSize:(unsigned long long)arg1 ;
-(id)mimeType;
-(id)fileURL;
-(id)contentID;
-(void)setContentID:(id)arg1 ;
-(id)fileURLString;
-(void)_setJSONDictionary:(id)arg1 ;
-(void)setFileURLString:(id)arg1 ;
-(id)serializedRepresentation;
-(void)setUseMailDrop:(BOOL)arg1 ;
-(BOOL)useMailDrop;
-(void)setMimeType:(id)arg1 ;
-(id)fileName;
-(void)setFileName:(id)arg1 ;
@end

