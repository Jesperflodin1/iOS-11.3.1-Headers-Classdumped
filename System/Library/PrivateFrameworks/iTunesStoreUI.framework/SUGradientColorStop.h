/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface SUGradientColorStop : NSObject <NSCoding> {

	double _r;
	double _g;
	double _b;
	double _a;
	double _offset;
	CGColorRef _rawColor;

}

@property (nonatomic,readonly) double offset; 
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)compare:(id)arg1 ;
-(double)offset;
-(CGColorRef)copyCGColor;
-(id)initWithColor:(CGColorRef)arg1 offset:(double)arg2 ;
@end

