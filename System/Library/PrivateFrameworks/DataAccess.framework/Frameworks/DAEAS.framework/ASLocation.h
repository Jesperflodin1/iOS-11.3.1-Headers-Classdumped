/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ASLocation : ASItem <NSSecureCoding> {

	NSString* _displayName;
	NSString* _annotation;
	NSString* _street;
	NSString* _city;
	NSString* _state;
	NSString* _postalCode;
	NSString* _country;
	NSString* _latitude;
	NSString* _longitude;
	NSString* _accuracy;
	NSString* _altitude;
	NSString* _altitudeAccuracy;

}

@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * annotation;                    //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,retain) NSString * street;                        //@synthesize street=_street - In the implementation block
@property (nonatomic,retain) NSString * city;                          //@synthesize city=_city - In the implementation block
@property (nonatomic,retain) NSString * state;                         //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * postalCode;                    //@synthesize postalCode=_postalCode - In the implementation block
@property (nonatomic,retain) NSString * country;                       //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * latitude;                      //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,retain) NSString * longitude;                     //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) NSString * accuracy;                      //@synthesize accuracy=_accuracy - In the implementation block
@property (nonatomic,retain) NSString * altitude;                      //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,retain) NSString * altitudeAccuracy;              //@synthesize altitudeAccuracy=_altitudeAccuracy - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)locationWithCalLocation:(void*)arg1 ;
-(void)setAltitude:(NSString *)arg1 ;
-(NSString *)altitude;
-(void)setLatitude:(NSString *)arg1 ;
-(void)setLongitude:(NSString *)arg1 ;
-(NSString *)country;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)city;
-(void)setCity:(NSString *)arg1 ;
-(NSString *)accuracy;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)street;
-(void)setStreet:(NSString *)arg1 ;
-(void)setPostalCode:(NSString *)arg1 ;
-(NSString *)postalCode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setState:(NSString *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(NSString *)displayName;
-(NSString *)annotation;
-(void)setAnnotation:(NSString *)arg1 ;
-(NSString *)latitude;
-(NSString *)longitude;
-(BOOL)isEmptyLocation;
-(id)initWithApplicationData:(id)arg1 ;
-(NSString *)altitudeAccuracy;
-(id)initWithCalLocation:(void*)arg1 ;
-(void)setAltitudeAccuracy:(NSString *)arg1 ;
-(void)setAccuracy:(NSString *)arg1 ;
-(BOOL)isEqualToLocation:(id)arg1 ;
@end

