/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
+(BOOL)isRecognizedClassForContent:(id)arg1 ;
+(Class)attachmentClass;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(void)configureFileWrapper:(id)arg1 ;
-(id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id*)arg2 ;
-(BOOL)_shouldContinueDecodingProcess;
-(id)decodeTextRichtext;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)decodeTextPlain;
-(id)decodeTextCalendar;
-(id)decodeMultipartAppledouble;
-(id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageRfc822;
-(id)decodeMessagePartial;
-(id)decodeMessageExternal_body;
-(id)htmlContent;
-(id)fileWrapperForcingDownload:(BOOL)arg1 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL*)arg5 ;
@end
