/** THIS IS AN AUTOMATICALLY GENERATED FILE.  DO NOT MODIFY
 * BY HAND!!
 *
 * Generated by LCM
 **/

#include <string.h>
#include "mrlcm_cov_t.h"

static int __mrlcm_cov_t_hash_computed;
static int64_t __mrlcm_cov_t_hash;
 
int64_t __mrlcm_cov_t_hash_recursive(const __lcm_hash_ptr *p)
{
    const __lcm_hash_ptr *fp;
    for (fp = p; fp != NULL; fp = fp->parent)
        if (fp->v == __mrlcm_cov_t_get_hash)
            return 0;
 
    const __lcm_hash_ptr cp = { p, (void*)__mrlcm_cov_t_get_hash };
    (void) cp;
 
    int64_t hash = 0x36a032fb94545747LL
         + __int64_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __int64_t_hash_recursive(&cp)
         + __int32_t_hash_recursive(&cp)
         + __double_hash_recursive(&cp)
        ;
 
    return (hash<<1) + ((hash>>63)&1);
}
 
int64_t __mrlcm_cov_t_get_hash(void)
{
    if (!__mrlcm_cov_t_hash_computed) {
        __mrlcm_cov_t_hash = __mrlcm_cov_t_hash_recursive(NULL);
        __mrlcm_cov_t_hash_computed = 1;
    }
 
    return __mrlcm_cov_t_hash;
}
 
int __mrlcm_cov_t_encode_array(void *buf, int offset, int maxlen, const mrlcm_cov_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].id), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].collection), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].element_id), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_encode_array(buf, offset + pos, maxlen - pos, &(p[element].n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __double_encode_array(buf, offset + pos, maxlen - pos, p[element].entries, p[element].n);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int mrlcm_cov_t_encode(void *buf, int offset, int maxlen, const mrlcm_cov_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __mrlcm_cov_t_get_hash();
 
    thislen = __int64_t_encode_array(buf, offset + pos, maxlen - pos, &hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    thislen = __mrlcm_cov_t_encode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int __mrlcm_cov_t_encoded_array_size(const mrlcm_cov_t *p, int elements)
{
    int size = 0, element;
    for (element = 0; element < elements; element++) {
 
        size += __int64_t_encoded_array_size(&(p[element].id), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].collection), 1);
 
        size += __int64_t_encoded_array_size(&(p[element].element_id), 1);
 
        size += __int32_t_encoded_array_size(&(p[element].n), 1);
 
        size += __double_encoded_array_size(p[element].entries, p[element].n);
 
    }
    return size;
}
 
int mrlcm_cov_t_encoded_size(const mrlcm_cov_t *p)
{
    return 8 + __mrlcm_cov_t_encoded_array_size(p, 1);
}
 
int __mrlcm_cov_t_decode_array(const void *buf, int offset, int maxlen, mrlcm_cov_t *p, int elements)
{
    int pos = 0, thislen, element;
 
    for (element = 0; element < elements; element++) {
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].id), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].collection), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].element_id), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        thislen = __int32_t_decode_array(buf, offset + pos, maxlen - pos, &(p[element].n), 1);
        if (thislen < 0) return thislen; else pos += thislen;
 
        p[element].entries = (double*) lcm_malloc(sizeof(double) * p[element].n);
        thislen = __double_decode_array(buf, offset + pos, maxlen - pos, p[element].entries, p[element].n);
        if (thislen < 0) return thislen; else pos += thislen;
 
    }
    return pos;
}
 
int __mrlcm_cov_t_decode_array_cleanup(mrlcm_cov_t *p, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_decode_array_cleanup(&(p[element].id), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].collection), 1);
 
        __int64_t_decode_array_cleanup(&(p[element].element_id), 1);
 
        __int32_t_decode_array_cleanup(&(p[element].n), 1);
 
        __double_decode_array_cleanup(p[element].entries, p[element].n);
        if (p[element].entries) free(p[element].entries);
 
    }
    return 0;
}
 
int mrlcm_cov_t_decode(const void *buf, int offset, int maxlen, mrlcm_cov_t *p)
{
    int pos = 0, thislen;
    int64_t hash = __mrlcm_cov_t_get_hash();
 
    int64_t this_hash;
    thislen = __int64_t_decode_array(buf, offset + pos, maxlen - pos, &this_hash, 1);
    if (thislen < 0) return thislen; else pos += thislen;
    if (this_hash != hash) return -1;
 
    thislen = __mrlcm_cov_t_decode_array(buf, offset + pos, maxlen - pos, p, 1);
    if (thislen < 0) return thislen; else pos += thislen;
 
    return pos;
}
 
int mrlcm_cov_t_decode_cleanup(mrlcm_cov_t *p)
{
    return __mrlcm_cov_t_decode_array_cleanup(p, 1);
}
 
int __mrlcm_cov_t_clone_array(const mrlcm_cov_t *p, mrlcm_cov_t *q, int elements)
{
    int element;
    for (element = 0; element < elements; element++) {
 
        __int64_t_clone_array(&(p[element].id), &(q[element].id), 1);
 
        __int32_t_clone_array(&(p[element].collection), &(q[element].collection), 1);
 
        __int64_t_clone_array(&(p[element].element_id), &(q[element].element_id), 1);
 
        __int32_t_clone_array(&(p[element].n), &(q[element].n), 1);
 
        q[element].entries = (double*) lcm_malloc(sizeof(double) * q[element].n);
        __double_clone_array(p[element].entries, q[element].entries, p[element].n);
 
    }
    return 0;
}
 
mrlcm_cov_t *mrlcm_cov_t_copy(const mrlcm_cov_t *p)
{
    mrlcm_cov_t *q = (mrlcm_cov_t*) malloc(sizeof(mrlcm_cov_t));
    __mrlcm_cov_t_clone_array(p, q, 1);
    return q;
}
 
void mrlcm_cov_t_destroy(mrlcm_cov_t *p)
{
    __mrlcm_cov_t_decode_array_cleanup(p, 1);
    free(p);
}
 
int mrlcm_cov_t_publish(lcm_t *lc, const char *channel, const mrlcm_cov_t *p)
{
      int max_data_size = mrlcm_cov_t_encoded_size (p);
      uint8_t *buf = (uint8_t*) malloc (max_data_size);
      if (!buf) return -1;
      int data_size = mrlcm_cov_t_encode (buf, 0, max_data_size, p);
      if (data_size < 0) {
          free (buf);
          return data_size;
      }
      int status = lcm_publish (lc, channel, buf, data_size);
      free (buf);
      return status;
}

struct _mrlcm_cov_t_subscription_t {
    mrlcm_cov_t_handler_t user_handler;
    void *userdata;
    lcm_subscription_t *lc_h;
};
static
void mrlcm_cov_t_handler_stub (const lcm_recv_buf_t *rbuf, 
                            const char *channel, void *userdata)
{
    int status;
    mrlcm_cov_t p;
    memset(&p, 0, sizeof(mrlcm_cov_t));
    status = mrlcm_cov_t_decode (rbuf->data, 0, rbuf->data_size, &p);
    if (status < 0) {
        fprintf (stderr, "error %d decoding mrlcm_cov_t!!!\n", status);
        return;
    }

    mrlcm_cov_t_subscription_t *h = (mrlcm_cov_t_subscription_t*) userdata;
    h->user_handler (rbuf, channel, &p, h->userdata);

    mrlcm_cov_t_decode_cleanup (&p);
}

mrlcm_cov_t_subscription_t* mrlcm_cov_t_subscribe (lcm_t *lcm, 
                    const char *channel, 
                    mrlcm_cov_t_handler_t f, void *userdata)
{
    mrlcm_cov_t_subscription_t *n = (mrlcm_cov_t_subscription_t*)
                       malloc(sizeof(mrlcm_cov_t_subscription_t));
    n->user_handler = f;
    n->userdata = userdata;
    n->lc_h = lcm_subscribe (lcm, channel, 
                                 mrlcm_cov_t_handler_stub, n);
    if (n->lc_h == NULL) {
        fprintf (stderr,"couldn't reg mrlcm_cov_t LCM handler!\n");
        free (n);
        return NULL;
    }
    return n;
}

int mrlcm_cov_t_unsubscribe(lcm_t *lcm, mrlcm_cov_t_subscription_t* hid)
{
    int status = lcm_unsubscribe (lcm, hid->lc_h);
    if (0 != status) {
        fprintf(stderr, 
           "couldn't unsubscribe mrlcm_cov_t_handler %p!\n", hid);
        return -1;
    }
    free (hid);
    return 0;
}

