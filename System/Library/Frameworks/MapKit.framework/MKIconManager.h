/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface MKIconManager : NSObject
+(id)_iconManager;
+(void)setDiskCacheURL:(id)arg1 ;
+(void)setUseSharedCaches;
+(CGColorRef)newFillColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newHaloColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(CGColorRef)newGlyphColorForStyleAttributes:(id)arg1 forScale:(double)arg2 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 navMode:(BOOL)arg4 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 iconText:(id)arg2 size:(unsigned long long)arg3 forScale:(double)arg4 navMode:(BOOL)arg5 ;
+(id)_imageForFeatureStyleAttributes:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficCamera:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForTrafficIncidentType:(long long)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 ;
+(id)imageForMapItem:(id)arg1 forScale:(double)arg2 fallbackToBundleIcon:(BOOL)arg3 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForMapItem:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 fallbackToBundleIcon:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 isCarplay:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 transparent:(BOOL)arg5 transitMode:(BOOL)arg6 interactive:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 ;
+(id)imageForStyle:(id)arg1 size:(unsigned long long)arg2 forScale:(double)arg3 format:(int)arg4 customIconID:(unsigned long long)arg5 fallbackToBundleIcon:(BOOL)arg6 transparent:(BOOL)arg7 transitmode:(BOOL)arg8 interactive:(BOOL)arg9 isCarplay:(BOOL)arg10 ;
+(void)requestImageForStyleAttributes:(id)arg1 size:(unsigned long long)arg2 scale:(double)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

