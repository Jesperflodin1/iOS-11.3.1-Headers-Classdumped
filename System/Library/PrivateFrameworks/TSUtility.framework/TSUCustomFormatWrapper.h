/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSUtility/TSUtility-Structs.h>
@interface TSUCustomFormatWrapper : NSObject {

	TSUCustomFormat* mCustomFormat;

}
-(const TSUCustomFormat*)pointerToTSUCustomFormat;
-(id)initWithCustomFormat:(TSUCustomFormat*)arg1 ;
-(int)formatType;
-(id)formatName;
-(const SCD_Struct_TS38*)defaultFormatData;
-(const SCD_Struct_TS38*)conditionalFormatDataForValue:(double)arg1 ;
@end

