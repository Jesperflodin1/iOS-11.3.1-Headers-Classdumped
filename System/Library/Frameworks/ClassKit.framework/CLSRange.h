/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <ClassKit/CLSObject.h>
#import <libobjc.A.dylib/CLSRelationable.h>

@class NSString;

@interface CLSRange : CLSObject <CLSRelationable> {

	double _start;
	double _end;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double start;                             //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) double end;                               //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) double delta; 
@property (nonatomic,readonly) NSString * parentObjectID; 
+(BOOL)supportsSecureCoding;
+(id)relations;
+(id)compressOverlappingRanges:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)start;
-(void)setStart:(double)arg1 ;
-(double)end;
-(void)setEnd:(double)arg1 ;
-(id)dictionaryRepresentation;
-(double)delta;
-(BOOL)overlapsWith:(id)arg1 ;
-(id)initWithRange:(id)arg1 ;
-(BOOL)validateObject:(id*)arg1 ;
-(id)initWithStart:(double)arg1 end:(double)arg2 ;
-(void)mergeWithRange:(id)arg1 ;
@end
