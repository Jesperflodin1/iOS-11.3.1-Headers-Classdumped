/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <IMCore/IMPluginPayload.h>

@protocol CKPluginEntryViewController;
@class NSURL, UIViewController, NSDictionary, CKMediaObject;

@interface CKBrowserItemPayload : IMPluginPayload {

	BOOL _requiresValidation;
	BOOL _useDirectSend;
	NSURL* _videoComplementFileURL;
	UIViewController*<CKPluginEntryViewController> _photoShelfViewController;
	NSURL* _fileURL;
	NSDictionary* _attributionInfo;
	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) NSURL * videoComplementFileURL;                                                       //@synthesize videoComplementFileURL=_videoComplementFileURL - In the implementation block
@property (nonatomic,retain) UIViewController*<CKPluginEntryViewController> photoShelfViewController;              //@synthesize photoShelfViewController=_photoShelfViewController - In the implementation block
@property (nonatomic,retain) NSURL * fileURL;                                                                      //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSDictionary * attributionInfo;                                                       //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,retain) CKMediaObject * mediaObject;                                                          //@synthesize mediaObject=_mediaObject - In the implementation block
@property (assign,nonatomic) BOOL requiresValidation;                                                              //@synthesize requiresValidation=_requiresValidation - In the implementation block
@property (assign,nonatomic) BOOL useDirectSend;                                                                   //@synthesize useDirectSend=_useDirectSend - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)browserItemFromSticker:(id)arg1 ;
+(id)browserItemPayloadFromIMPluginPayload:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)fileURL;
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(id)mediaObjectFromPayload;
-(BOOL)shouldSendAsMediaObject;
-(NSDictionary *)attributionInfo;
-(CKMediaObject *)mediaObject;
-(BOOL)requiresValidation;
-(BOOL)isEqualToPluginPayload:(id)arg1 ;
-(UIViewController*<CKPluginEntryViewController>)photoShelfViewController;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(void)setPhotoShelfViewController:(UIViewController*<CKPluginEntryViewController>)arg1 ;
-(void)setUseDirectSend:(BOOL)arg1 ;
-(NSURL *)videoComplementFileURL;
-(void)setVideoComplementFileURL:(NSURL *)arg1 ;
-(void)setRequiresValidation:(BOOL)arg1 ;
-(BOOL)useDirectSend;
-(BOOL)shouldSendAsText;
-(BOOL)shouldSendAsRichLink;
-(id)__ck_urlFromTextBodyForRichLink;
@end

