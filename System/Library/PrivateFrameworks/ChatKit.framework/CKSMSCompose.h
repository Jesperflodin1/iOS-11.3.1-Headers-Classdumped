/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKSMSCompose <NSObject>
@required
+(BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
+(BOOL)acceptsMIMEType:(id)arg1;
+(double)maxTrimDurationForAudio;
+(double)maxTrimDurationForVideo;
-(void)setGameCenterPickedHandles:(id)arg1 playerNames:(id)arg2;
-(void)forceMMS;
-(void)setCanEditRecipients:(BOOL)arg1;
-(BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
-(BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
-(void)setPendingAddresses:(id)arg1;
-(void)disableCameraAttachments;
-(void)setTextEntryContentsVisible:(BOOL)arg1;
-(void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
-(void)setUICustomizationData:(id)arg1;
-(void)setUTIs:(id)arg1;
-(BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
-(void)forceCancelComposition;
-(void)setGameCenterModeWithPickerBlock:(/*^block*/id)arg1;
-(BOOL)insertRichLinkWithURL:(id)arg1 andData:(id)arg2;
-(BOOL)insertMessage:(id)arg1;

@end
