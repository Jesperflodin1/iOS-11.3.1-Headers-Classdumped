/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPCloudRecord.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate, NSMutableDictionary;

@interface _MSPMockCloudRecord : NSObject <MSPCloudRecord, NSMutableCopying, NSCoding> {

	NSMutableDictionary* _values;
	NSDate* _cloudRecordModificationDate;
	NSString* _name;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * type;                                   //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cloudRecordName; 
@property (nonatomic,readonly) NSDate * cloudRecordModificationDate;              //@synthesize cloudRecordModificationDate=_cloudRecordModificationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)name;
-(NSString *)type;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)cloudRecordName;
-(NSDate *)cloudRecordModificationDate;
-(void)updateModificationDate;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
@end

