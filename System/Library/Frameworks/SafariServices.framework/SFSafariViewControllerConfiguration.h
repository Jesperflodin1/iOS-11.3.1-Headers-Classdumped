/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SFSafariViewControllerConfiguration : NSObject <NSSecureCoding, NSCopying> {

	BOOL _entersReaderIfAvailable;
	BOOL _barCollapsingEnabled;

}

@property (assign,nonatomic) BOOL entersReaderIfAvailable;              //@synthesize entersReaderIfAvailable=_entersReaderIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL barCollapsingEnabled;                 //@synthesize barCollapsingEnabled=_barCollapsingEnabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEntersReaderIfAvailable:(BOOL)arg1 ;
-(void)setBarCollapsingEnabled:(BOOL)arg1 ;
-(BOOL)entersReaderIfAvailable;
-(BOOL)barCollapsingEnabled;
@end

