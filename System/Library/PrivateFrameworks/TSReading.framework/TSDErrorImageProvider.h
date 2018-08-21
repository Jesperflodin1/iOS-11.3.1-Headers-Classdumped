/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDImageProvider.h>

@interface TSDErrorImageProvider : TSDImageProvider
+(id)sharedInstance;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(unsigned long long)retainCount;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(BOOL)isError;
-(void)drawImageInContext:(CGContextRef)arg1 rect:(CGRect)arg2 ;
-(CGPDFDocumentRef)p_iconPDFDocument;
@end

