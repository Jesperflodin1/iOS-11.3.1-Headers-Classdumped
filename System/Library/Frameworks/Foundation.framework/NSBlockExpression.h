/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSExpression.h>

@class NSArray;

@interface NSBlockExpression : NSExpression {

	/*^block*/id _block;
	NSArray* _arguments;

}
+(BOOL)supportsSecureCoding;
-(void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)_expressionWithSubstitutionVariables:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 block:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(/*^block*/id)expressionBlock;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)expressionValueWithObject:(id)arg1 context:(id)arg2 ;
-(id)predicateFormat;
-(id)arguments;
@end

