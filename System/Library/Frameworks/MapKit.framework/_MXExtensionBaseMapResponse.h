/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface _MXExtensionBaseMapResponse : NSObject <NSSecureCoding> {

	NSSet* _namedImages;
	NSSet* _features;

}

@property (nonatomic,copy) NSSet * namedImages;              //@synthesize namedImages=_namedImages - In the implementation block
@property (nonatomic,copy) NSSet * features;                 //@synthesize features=_features - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSSet *)namedImages;
-(void)setNamedImages:(NSSet *)arg1 ;
-(void)setFeatures:(NSSet *)arg1 ;
-(NSSet *)features;
@end

