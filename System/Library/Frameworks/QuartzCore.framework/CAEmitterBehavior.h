/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CAEmitterBehavior : NSObject <NSSecureCoding> {

	unsigned _type;
	NSString* _name;
	void* _attr;
	void* _cache;
	unsigned _flags;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) BOOL enabled; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)behaviorTypes;
+(BOOL)supportsSecureCoding;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)behaviorWithType:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)type;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)initWithType:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

