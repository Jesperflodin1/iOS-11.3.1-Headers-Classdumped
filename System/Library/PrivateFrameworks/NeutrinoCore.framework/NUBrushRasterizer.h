/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUBrushRasterizer : NSObject
+(long long)_rasterizeBrushStroke:(id)arg1 toROI:(SCD_Struct_NU6)arg2 maskPtr:(char*)arg3 maskPtrRowBytes:(long long)arg4 close:(BOOL)arg5 startIndex:(long long)arg6 pressureMode:(long long)arg7 ;
+(long long)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU5)arg2 toBuffer:(id)arg3 close:(BOOL)arg4 startIndex:(long long)arg5 ;
+(void)rasterizeBrushStroke:(id)arg1 atPoint:(SCD_Struct_NU5)arg2 toBuffer:(id)arg3 ;
@end
