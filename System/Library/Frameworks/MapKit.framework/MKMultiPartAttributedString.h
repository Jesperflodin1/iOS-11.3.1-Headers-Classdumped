/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, NSArray;

@interface MKMultiPartAttributedString : NSObject <NSCopying> {

	NSAttributedString* _attributedString;
	NSArray* _components;
	NSArray* _separators;

}

@property (nonatomic,copy,readonly) NSArray * components;                          //@synthesize components=_components - In the implementation block
@property (nonatomic,copy,readonly) NSArray * separators;                          //@synthesize separators=_separators - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedString;              //@synthesize attributedString=_attributedString - In the implementation block
+(id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2 ;
+(id)multiPartAttributedStringWithString:(id)arg1 ;
+(id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2 ;
-(NSArray *)separators;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSAttributedString *)attributedString;
-(NSArray *)components;
-(id)initWithComponents:(id)arg1 separators:(id)arg2 ;
@end

