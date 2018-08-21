/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class NSArray;

@interface CVPixelBufferCacheItem : NSObject {

	NSArray* _buffers;
	NSArray* _DODs;
	CGSize _fullSize;

}

@property (nonatomic,readonly) NSArray * buffers;              //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,readonly) NSArray * DODs;                 //@synthesize DODs=_DODs - In the implementation block
@property (nonatomic,readonly) CGSize fullSize;                //@synthesize fullSize=_fullSize - In the implementation block
-(NSArray *)buffers;
-(id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(CGSize)arg3 ;
-(NSArray *)DODs;
-(CGSize)fullSize;
@end
