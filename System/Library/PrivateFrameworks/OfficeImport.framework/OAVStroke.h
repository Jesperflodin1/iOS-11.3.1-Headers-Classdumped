/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface OAVStroke : NSObject
+(void)initialize;
+(char)readPresetDashStyle:(id)arg1 ;
+(unsigned char)readLineEndType:(id)arg1 ;
+(unsigned char)readLineEndWidth:(id)arg1 ;
+(unsigned char)readLineEndLength:(id)arg1 ;
+(unsigned char)readCapStyle:(id)arg1 ;
+(unsigned char)readCompoundType:(id)arg1 ;
+(id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3 ;
+(id)targetFgColorWithManager:(id)arg1 ;
+(id)readFromManager:(id)arg1 ;
+(void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
+(void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2 ;
@end

