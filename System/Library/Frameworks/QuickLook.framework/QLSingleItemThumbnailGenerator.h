/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLItemThumbnailGeneratorProtocolInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, QLItemThumbnailGenerator, QLItem, NSString;

@interface QLSingleItemThumbnailGenerator : NSObject <QLItemThumbnailGeneratorProtocolInternal, NSSecureCoding> {

	UIImage* _thumbnail;
	CGSize _thumbnailSize;
	BOOL _isRepresentative;
	QLItemThumbnailGenerator* _thumbnailGenerator;
	QLItem* _item;

}

@property (nonatomic,retain) QLItemThumbnailGenerator * thumbnailGenerator;              //@synthesize thumbnailGenerator=_thumbnailGenerator - In the implementation block
@property (assign,nonatomic,__weak) QLItem * item;                                       //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(QLItem *)item;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setItem:(QLItem *)arg1 ;
-(QLItemThumbnailGenerator *)thumbnailGenerator;
-(void)generateThumbnailWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setThumbnailGenerator:(QLItemThumbnailGenerator *)arg1 ;
-(void)_provideThumbnailForUbiquitousURLWithSize:(CGSize)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_handleThumbnailGenerationFinishedWithThumbnail:(id)arg1 size:(CGSize)arg2 clientCompletionBlock:(/*^block*/id)arg3 ;
-(id)_concurrentQueue;
-(id)genericIconWithSize:(CGSize)arg1 ;
-(id)initWithItem:(id)arg1 ;
@end

