/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <PhotoEditSupport/BLPixelImageBuffer.h>

@class NSMutableData;

@interface BLCGPixelImageBuffer : BLPixelImageBuffer {

	CGContextRef _bitmapContext;
	unsigned long long _rowBytes;
	NSMutableData* _bitmapData;

}

@property (nonatomic,retain) NSMutableData * bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
-(id)initWithSize:(CGSize)arg1 colorManagement:(int)arg2 ;
-(void)accessPixelsByContextInBlock:(/*^block*/id)arg1 ;
-(void)renderCIImage:(id)arg1 ;
-(void)accessPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(void)readPixelsByAddressInBlock:(/*^block*/id)arg1 ;
-(id)ciImage;
-(void)setBitmapData:(NSMutableData *)arg1 ;
-(NSMutableData *)bitmapData;
@end

