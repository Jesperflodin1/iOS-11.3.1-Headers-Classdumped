/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TNFormulaIDWrapper : NSObject <NSCopying> {

	SCD_Struct_TS128 mID;

}

@property (readonly) SCD_Struct_TS128 formulaID; 
-(SCD_Struct_TS128)formulaID;
-(id)initWithTNChartFormulaID:(SCD_Struct_TS128)arg1 ;
-(BOOL)isEqualToTNFormulaIDWrapper:(id)arg1 ;
-(SCD_Struct_TS128)chartFormulaID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

