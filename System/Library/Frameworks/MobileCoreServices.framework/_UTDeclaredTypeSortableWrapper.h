/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileCoreServices/MobileCoreServices-Structs.h>
@class _UTDeclaredType;

@interface _UTDeclaredTypeSortableWrapper : NSObject {

	_UTDeclaredType* _declaredType;
	LSDatabase* _database;
	const SCD_Struct_UT12* _utypeData;

}

@property (nonatomic,retain) _UTDeclaredType * declaredType;                //@synthesize declaredType=_declaredType - In the implementation block
@property (assign,nonatomic) LSDatabase* database;                          //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) const SCD_Struct_UT12* utypeData;              //@synthesize utypeData=_utypeData - In the implementation block
-(void)setDeclaredType:(_UTDeclaredType *)arg1 ;
-(void)setUtypeData:(const SCD_Struct_UT12*)arg1 ;
-(_UTDeclaredType *)declaredType;
-(const SCD_Struct_UT12*)utypeData;
-(long long)compare:(id)arg1 ;
-(LSDatabase*)database;
-(void)setDatabase:(LSDatabase*)arg1 ;
@end

