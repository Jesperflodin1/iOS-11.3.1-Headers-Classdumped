/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCECellValue.h>

@interface TSCEDateCellValue : TSCECellValue {

	TSCEDateValue* _dateValue;

}
-(void)encodeToArchive:(DateCellValueArchive*)arg1 ;
-(TSCEValue)tsceValue;
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(long long)compareToCellValue:(id)arg1 ;
-(id)initWithArchive:(const DateCellValueArchive*)arg1 locale:(id)arg2 ;
-(id)initWithDateValue:(TSCEDateValue*)arg1 locale:(id)arg2 ;
-(id)initWithDate:(id)arg1 locale:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)displayString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)format;
-(TSCEDateValue*)dateValue;
@end

