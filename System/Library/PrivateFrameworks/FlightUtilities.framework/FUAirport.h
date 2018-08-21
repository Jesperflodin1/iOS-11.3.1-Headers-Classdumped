/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSTimeZone, CLPlacemark;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding> {

	NSString* _IATACode;
	NSString* _name;
	NSString* _city;
	NSTimeZone* _timeZone;
	CLPlacemark* _placemark;
	CLLocationCoordinate2D _location;

}

@property (retain) NSString * IATACode;                          //@synthesize IATACode=_IATACode - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * city;                              //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign) CLLocationCoordinate2D location;              //@synthesize location=_location - In the implementation block
@property (retain) CLPlacemark * placemark;                      //@synthesize placemark=_placemark - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CLLocationCoordinate2D)location;
-(NSTimeZone *)timeZone;
-(void)setLocation:(CLLocationCoordinate2D)arg1 ;
-(CLPlacemark *)placemark;
-(void)setPlacemark:(CLPlacemark *)arg1 ;
-(NSString *)IATACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)fetchPlacemarkWithCompletionHandler:(/*^block*/id)arg1 ;
@end
