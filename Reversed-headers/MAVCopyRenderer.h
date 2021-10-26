//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MAVGLContext;

@interface MAVCopyRenderer : NSObject
{
    int fromTexId;
    struct __CVBuffer *fromTexRef;
    unsigned int fbo;
    unsigned int program;
    unsigned int vao;
    unsigned int vbo;
    unsigned int ebo;
    int u_texture;
    MAVGLContext *_glContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MAVGLContext *glContext; // @synthesize glContext=_glContext;
- (void)toScreen;
- (void)fromPixelBuffer:(struct __CVBuffer *)arg1;
- (void)fromTexture:(int)arg1;
- (void)dealloc;
- (id)initWithGL:(id)arg1;

@end
