/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Social/Social-Structs.h>
@interface SLImageDownsampling : NSObject
+(void)generateThumbnailFromImageData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
+(id)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 ;
+(SCD_Struct_SL13)imageSizeWithData:(id)arg1 ;
+(id)createThumbnailWithData:(id)arg1 adjustSmallestSideToSize:(unsigned long long)arg2 ;
+(void)downsampleImageData:(id)arg1 toMaxByteSize:(unsigned long long)arg2 resultsHandler:(/*^block*/id)arg3 ;
@end

