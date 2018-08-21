/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDCFUtilities : NSObject
+(BOOL)isRenderFileName:(id)arg1 ;
+(id)dcfRegex;
+(BOOL)fileName:(id)arg1 matchesRegex:(id)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)insertRenderMarkerToFileName:(id)arg1 ;
+(id)renderDCFRegex;
+(BOOL)isValidDCFFileName:(id)arg1 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(unsigned)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)encodeFileNameFromHash:(unsigned)arg1 ;
+(void)computeSHA256OfString:(id)arg1 intoBuffer:(char*)arg2 ;
+(id)placeValuesFromBases:(id)arg1 ;
+(id)convertHash:(unsigned)arg1 usingPlaceValues:(id)arg2 ;
+(id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 isOriginal:(BOOL)arg4 ;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
@end

