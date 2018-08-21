/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableOrderedSet, NSArray;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSMutableOrderedSet* _acceptableTypes;

}

@property (nonatomic,copy) NSArray * acceptableTypes; 
@property (nonatomic,copy) NSArray * acceptableTypeIdentifiers; 
+(BOOL)supportsSecureCoding;
+(id)_pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationForAcceptingClasses:(id)arg1 ;
+(id)pasteConfigurationWithAcceptableTypes:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)acceptableTypeIdentifiers;
-(void)addTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(id)initWithAcceptableTypes:(id)arg1 ;
-(id)initWithAcceptableTypeIdentifiers:(id)arg1 ;
-(void)setAcceptableTypeIdentifiers:(NSArray *)arg1 ;
-(void)addAcceptableTypeIdentifiers:(id)arg1 ;
-(id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1 ;
-(void)setAcceptableTypes:(NSArray *)arg1 ;
-(NSArray *)acceptableTypes;
@end

