/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLLocation;

@interface PLLocationOfInterest : NSObject {

	long long _type;
	CLLocation* _location;
	double _radius;

}

@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                      //@synthesize radius=_radius - In the implementation block
+(id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3 ;
-(void)dealloc;
-(id)description;
-(long long)type;
-(CLLocation *)location;
-(double)radius;
-(id)_descriptionType;
@end
