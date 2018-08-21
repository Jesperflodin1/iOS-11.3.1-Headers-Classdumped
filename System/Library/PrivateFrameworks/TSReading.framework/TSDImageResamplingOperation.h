/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageProvider, NSString, TSPObjectContext;

@interface TSDImageResamplingOperation : NSObject {

	TSDImageProvider* mImageProvider;
	CGSize mDesiredSize;
	NSString* mDisplayName;
	CGPathRef mMaskingPath;
	TSPObjectContext* mObjectContext;

}

@property (nonatomic,retain) TSDImageProvider * imageProvider; 
@property (assign,nonatomic) CGSize desiredSize; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,retain) TSPObjectContext * objectContext; 
@property (assign,nonatomic) CGPathRef maskingPath; 
-(void)setDisplayName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(CGSize)desiredSize;
-(void)setDesiredSize:(CGSize)arg1 ;
-(NSString *)displayName;
-(TSPObjectContext *)objectContext;
-(id)initWithImageProvider:(id)arg1 desiredSize:(CGSize)arg2 ;
-(void)setObjectContext:(TSPObjectContext *)arg1 ;
-(void)setMaskingPath:(CGPathRef)arg1 ;
-(id)performResampleOperationWithResampleOptions:(unsigned long long)arg1 bitmapContextOptions:(unsigned long long)arg2 ;
-(TSDImageProvider *)imageProvider;
-(CGPathRef)maskingPath;
-(void)setImageProvider:(TSDImageProvider *)arg1 ;
@end
