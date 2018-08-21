/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureArray.h>

@protocol MLFeatureArray <NSFastEnumeration>
@property (readonly) unsigned long long count; 
@required
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1;

@end


@interface MLFeatureArray : NSObject <MLFeatureArray>

@property (readonly) unsigned long long count; 
+(id)featureArrayWithArray:(id)arg1 error:(id*)arg2 ;
+(id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_ML33*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
@end

