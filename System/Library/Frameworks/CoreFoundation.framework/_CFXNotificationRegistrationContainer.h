/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF7* _children;

}
+(Class)childClass;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF2*)arg2 ;
-(void)resetChildren;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(void)removeChild:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)initWithParent:(id)arg1 ;
@end
