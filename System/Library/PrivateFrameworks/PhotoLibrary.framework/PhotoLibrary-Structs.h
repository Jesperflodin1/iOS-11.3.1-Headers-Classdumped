/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_PL7;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct __CFString* CFStringRef;

typedef struct CGContext* CGContextRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct vImageConverter* vImageConverterRef;

typedef struct iosPoolOpaque* iosPoolOpaqueRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct entryList {
	lruEntry tqh_first;
	lruEntry tqh_last;
} entryList;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct CGPath* CGPathRef;

typedef struct {
	CGPoint origin;
	CGPoint size;
} SCD_Struct_PL20;

typedef struct {
	CLLocationCoordinate2D field1;
	CGPoint field2;
} SCD_Struct_PL21;

typedef struct __CFUserNotification* CFUserNotificationRef;

