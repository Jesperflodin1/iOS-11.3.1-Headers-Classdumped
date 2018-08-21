/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSURL, NSString, UIImage;

@interface CKImageMediaObject : CKMediaObject {

	CKImageData* _imageData;
	CKImageData* _backgroundImageData;
	NSURL* _appendedBundleURL;
	CGSize _originalSize;
	NSString* _irisVideoPath;
	BOOL _isSticker;
	UIImage* _thumbnail;

}

@property (nonatomic,readonly) BOOL isSticker;                       //@synthesize isSticker=_isSticker - In the implementation block
@property (nonatomic,readonly) CKImageData * imageData; 
@property (nonatomic,retain) UIImage * thumbnail;                    //@synthesize thumbnail=_thumbnail - In the implementation block
@property (nonatomic,readonly) BOOL isIrisAsset; 
+(id)UTITypes;
+(id)attachmentSummary:(unsigned long long)arg1 ;
+(id)fallbackFilenamePrefix;
+(Class)imageDataClass;
+(BOOL)isPreviewable;
+(Class)__ck_attachmentItemClass;
-(void)dealloc;
-(CGSize)originalSize;
-(id)location;
-(id)previewItemURL;
-(id)previewItemTitle;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(int)mediaType;
-(CKImageData *)imageData;
-(BOOL)isIrisAsset;
-(id)calculateIrisVideoPath;
-(BOOL)isSticker;
-(BOOL)canShareItem;
-(id)pasteboardItem;
-(BOOL)canExport;
-(void)export:(id)arg1 ;
-(id)initWithTransfer:(id)arg1 ;
-(void)_removeAppendedBundle;
-(id)generateThumbnailFillToSize:(CGSize)arg1 contentAlignmentInsets:(UIEdgeInsets)arg2 ;
-(id)_getTempIrisFolder;
-(id)_getTempIrisBundleLocation;
-(id)_getIrisBundleURL;
-(CGSize)bbSize;
-(id)generateThumbnailForWidth:(double)arg1 orientation:(char)arg2 ;
-(id)getIrisVideoPath;
@end

