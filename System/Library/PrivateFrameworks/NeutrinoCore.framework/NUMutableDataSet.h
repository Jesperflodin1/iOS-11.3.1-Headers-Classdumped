/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUDataSet.h>

@interface NUMutableDataSet : NUDataSet

@property (nonatomic,readonly) long long capacity; 
-(DataSet*)_data;
-(id)initWithCapacity:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)capacity;
-(void)addValue:(double)arg1 ;
-(void)appendDataSet:(id)arg1 ;
@end

